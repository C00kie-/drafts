#include "struct.h"
#include "libft.h"

//
// struct list parse()
// {
//
//   return (NULL);
// }

//
// static void init_env(t_env *e)
// {
//   ft_memset(e, 0, sizeof(t_env));
// }

t_room		*room_new(char *name, int x, int y)
{
	t_room *nroom;

	nroom = (t_room*)malloc(sizeof(t_room));
	if (nroom == NULL)
		return (NULL);

	nroom->name = ft_strdup(name);
	nroom->x = x;
	nroom->y = y;
	nroom->next = NULL;
	return(nroom);
}

void		room_push(t_room **rooms, char *name, int x, int y)
{
	t_room *croom;

	if (*rooms == NULL)
		*rooms = room_new(name, x, y);
	else
	{
		croom = *rooms;
		while (croom->next != NULL)
			croom = croom->next;
		croom->next = room_new(name, x, y);
	}
}

void		room_print(t_room *rooms)
{
	t_room		*croom;

	ft_putstr("Rooms: ");
	croom = rooms;
	while (croom != NULL)
	{
		ft_putstr(croom->name);
		if (croom->next != NULL)
			ft_putstr(", ");
		croom = croom->next;
	}
	ft_putchar('\n');
}

int main(int argc,char** argv)
{
	t_room	*rooms;

	rooms = NULL;
	room_push(&rooms, "bedroom", 1, 2);
	room_push(&rooms, "stables", 2, 2);
	room_push(&rooms, "kitchen", 2, 3);
	room_print(rooms);

  //  struct s_room room;
  //  int nb;  --->env va prendre ca

//    room = (struct s_room)malloc(sizeof(t_room));

    if (argc == 2)
    {
      // room = parse(argv);
      // Lemming(room, nb);
    }
    else
    {
      //printerror
      return (-1);
    }

    //parsing
    //run le lemming
    //display
  return (0);
}
