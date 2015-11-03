#include "guestlib.hh"
#include <unistd.h>

int main() {
  int off, size;
  printf("open");
  fflush(stdout);
  printf("OPEN CODE: %d\n", shm_open_conn("10.0.2.3", "8889"));
  fflush(stdout);

  printf("alloc");
  fflush(stdout);
  printf("ALLOC CODE: %d\n", shm_alloc(1, 2, 'w', 1, &off, &size));
  fflush(stdout);
  printf("OFF: %d, SIZE: %d \n", off, size);
  fflush(stdout);

  printf("dealloc");
  fflush(stdout);
  printf("DEALLOC CODE: %d\n", shm_dealloc(1, 2));
  fflush(stdout);

  printf("create");
  fflush(stdout);
  printf("CVCREAT: %d\n", shm_create_cv(10, 1));
  fflush(stdout);

  printf("acq");
  fflush(stdout);
  printf("CVACQUI: %d\n", shm_acquire_cv(10, 1));
  fflush(stdout);

  printf("sleep");
  fflush(stdout);
  sleep(20);

  printf("notif");
  fflush(stdout);
  printf("CVNOTIF: %d\n", shm_notify_cv(10, 1));
  fflush(stdout);

  printf("rel");
  fflush(stdout);
  printf("CVRELEA: %d\n", shm_release_cv(10, 1));
  fflush(stdout);

  printf("del");
  fflush(stdout);
  printf("CVDELET: %d\n", shm_delete_cv(10, 1));
  fflush(stdout);

  printf("close");
  fflush(stdout);
  printf("CLOSE CODE: %d\n", shm_close_conn());
  fflush(stdout);
}