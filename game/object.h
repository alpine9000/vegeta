#ifndef __OBJECT_H
#define __OBJECT_H

//#define OBJECT_BACKING_STORE 1
#define OBJECT_MAX_OBJECTS    12
#define OBJECT_PHYSICS_FACTOR 2
#define OBJECT_WIDTH 32

#ifdef OBJECT_BACKING_STORE
#define OBJECT_MAX_BLIT_WIDTH 48+16
#define OBJECT_MAX_HEIGHT     60
#endif

typedef enum {
  SPRITE_PLAYER1_STAND_RIGHT,
  SPRITE_PLAYER1_RUN_RIGHT_1,
  SPRITE_PLAYER1_RUN_RIGHT_2,
  SPRITE_PLAYER1_RUN_RIGHT_3,
  SPRITE_PLAYER1_RUN_RIGHT_4,
  SPRITE_PLAYER1_STAND_LEFT,
  SPRITE_PLAYER1_RUN_LEFT_1,
  SPRITE_PLAYER1_RUN_LEFT_2,
  SPRITE_PLAYER1_RUN_LEFT_3,
  SPRITE_PLAYER1_RUN_LEFT_4,
  SPRITE_PLAYER1_PUNCH_LEFT_1,
  SPRITE_PLAYER1_PUNCH_LEFT_2,
  SPRITE_PLAYER1_PUNCH_RIGHT_1,
  SPRITE_PLAYER1_PUNCH_RIGHT_2,
  SPRITE_PLAYER1_HIT_LEFT,
  SPRITE_PLAYER1_HIT_RIGHT,  

  SPRITE_PLAYER2_STAND_RIGHT,
  SPRITE_PLAYER2_RUN_RIGHT_1,
  SPRITE_PLAYER2_RUN_RIGHT_2,
  SPRITE_PLAYER2_RUN_RIGHT_3,
  SPRITE_PLAYER2_RUN_RIGHT_4,
  SPRITE_PLAYER2_STAND_LEFT,
  SPRITE_PLAYER2_RUN_LEFT_1,
  SPRITE_PLAYER2_RUN_LEFT_2,
  SPRITE_PLAYER2_RUN_LEFT_3,
  SPRITE_PLAYER2_RUN_LEFT_4,   
  SPRITE_PLAYER2_PUNCH_LEFT_1,
  SPRITE_PLAYER2_PUNCH_LEFT_2,
  SPRITE_PLAYER2_PUNCH_RIGHT_1,
  SPRITE_PLAYER2_PUNCH_RIGHT_2,
  SPRITE_PLAYER2_HIT_LEFT,
  SPRITE_PLAYER2_HIT_RIGHT,    
  
  SPRITE_PLAYER3_STAND_RIGHT,
  SPRITE_PLAYER3_RUN_RIGHT_1,
  SPRITE_PLAYER3_RUN_RIGHT_2,
  SPRITE_PLAYER3_RUN_RIGHT_3,
  SPRITE_PLAYER3_RUN_RIGHT_4,
  SPRITE_PLAYER3_STAND_LEFT,
  SPRITE_PLAYER3_RUN_LEFT_1,
  SPRITE_PLAYER3_RUN_LEFT_2,
  SPRITE_PLAYER3_RUN_LEFT_3,
  SPRITE_PLAYER3_RUN_LEFT_4 ,
  SPRITE_PLAYER3_PUNCH_LEFT_1,
  SPRITE_PLAYER3_PUNCH_LEFT_2,
  SPRITE_PLAYER3_PUNCH_RIGHT_1,
  SPRITE_PLAYER3_PUNCH_RIGHT_2,
  SPRITE_PLAYER3_HIT_LEFT,
  SPRITE_PLAYER3_HIT_RIGHT,

  SPRITE_BOSS_STAND_RIGHT,
  SPRITE_BOSS_RUN_RIGHT_1,
  SPRITE_BOSS_RUN_RIGHT_2,
  SPRITE_BOSS_RUN_RIGHT_3,
  SPRITE_BOSS_RUN_RIGHT_4,
  SPRITE_BOSS_STAND_LEFT,
  SPRITE_BOSS_RUN_LEFT_1,
  SPRITE_BOSS_RUN_LEFT_2,
  SPRITE_BOSS_RUN_LEFT_3,
  SPRITE_BOSS_RUN_LEFT_4 ,
  SPRITE_BOSS_ATTACK_LEFT_1,
  SPRITE_BOSS_ATTACK_LEFT_2,
  SPRITE_BOSS_ATTACK_LEFT_3,  
  SPRITE_BOSS_ATTACK_RIGHT_1,
  SPRITE_BOSS_ATTACK_RIGHT_2,
  SPRITE_BOSS_ATTACK_RIGHT_3,  
  SPRITE_BOSS_HIT_LEFT,
  SPRITE_BOSS_HIT_RIGHT,      

  SPRITE_HAND,
  SPRITE_DOOR,
  SPRITE_JOYSTICK1,
  SPRITE_JOYSTICK2,
  SPRITE_GAMEOVER,
  SPRITE_GAMECOMPLETE,  

  SPRITE_PHONEBOOTH,
  SPRITE_PHONEBOOTH_BROKEN,
  SPRITE_PHONEBOOTH_JUNK1,
  SPRITE_PHONEBOOTH_JUNK2,
  SPRITE_PHONEBOOTH_JUNK3,
  
  SPRITE_POSTBOX,
  SPRITE_POSTBOX_BROKEN,
  SPRITE_POSTBOX_JUNK1,
  SPRITE_POSTBOX_JUNK2,
  SPRITE_POSTBOX_JUNK3,  

  SPRITE_BONUS_BURGER,
  SPRITE_BONUS_COLA,  
} sprite_id_t;

typedef enum {
  OBJECT_ID_ENEMY = 0,
  OBJECT_ID_PLAYER1 = 1,
  OBJECT_ID_PLAYER2 = 2,
  OBJECT_ID_BOSS = 3,  
  OBJECT_ID_HAND = 4,
  OBJECT_ID_DOOR = 5,
  OBJECT_ID_JOYSTICK = 6,
  OBJECT_ID_GAMEOVER = 7,
  OBJECT_ID_GAMECOMPLETE = 8,  
  OBJECT_ID_PHONEBOOTH = 9,
  OBJECT_ID_POSTBOX = 10,  
  OBJECT_ID_JUNK = 11,
  OBJECT_ID_BONUS = 12,
} object_id_t;

typedef enum {
  OBJECT_STAND_RIGHT = 0,
  OBJECT_RUN_RIGHT = 1,
  OBJECT_RUN_LEFT = 2,
  OBJECT_STAND_LEFT = 3,
  OBJECT_PUNCH_LEFT1 = 4,
  OBJECT_PUNCH_LEFT2 = 5,
  OBJECT_PUNCH_RIGHT1 = 6,
  OBJECT_PUNCH_RIGHT2 = 7,
  OBJECT_HIT_LEFT = 8,
  OBJECT_HIT_RIGHT = 9
} object_action_t;

typedef enum {
  OBJECT_ANIM_PLAYER1_STAND_RIGHT = 0,
  OBJECT_ANIM_PLAYER1_RUN_RIGHT = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_RUN_RIGHT,
  OBJECT_ANIM_PLAYER1_STAND_LEFT = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_STAND_LEFT,
  OBJECT_ANIM_PLAYER1_RUN_LEFT  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_RUN_LEFT,
  OBJECT_ANIM_PLAYER1_PUNCH_LEFT1  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_PUNCH_LEFT1,
  OBJECT_ANIM_PLAYER1_PUNCH_LEFT2  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_PUNCH_LEFT2,
  OBJECT_ANIM_PLAYER1_PUNCH_RIGHT1  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_PUNCH_RIGHT1,
  OBJECT_ANIM_PLAYER1_PUNCH_RIGHT2  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_PUNCH_RIGHT2,
  OBJECT_ANIM_PLAYER1_HIT_LEFT  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_HIT_LEFT,
  OBJECT_ANIM_PLAYER1_HIT_RIGHT  = OBJECT_ANIM_PLAYER1_STAND_RIGHT + OBJECT_HIT_RIGHT,            

  OBJECT_ANIM_PLAYER2_STAND_RIGHT = OBJECT_ANIM_PLAYER1_HIT_RIGHT + 1,
  OBJECT_ANIM_PLAYER2_RUN_RIGHT = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_RUN_RIGHT,
  OBJECT_ANIM_PLAYER2_STAND_LEFT = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_STAND_LEFT,
  OBJECT_ANIM_PLAYER2_RUN_LEFT  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_RUN_LEFT,
  OBJECT_ANIM_PLAYER2_PUNCH_LEFT1  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_PUNCH_LEFT1,
  OBJECT_ANIM_PLAYER2_PUNCH_LEFT2  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_PUNCH_LEFT2,
  OBJECT_ANIM_PLAYER2_PUNCH_RIGHT1  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_PUNCH_RIGHT1,
  OBJECT_ANIM_PLAYER2_PUNCH_RIGHT2  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_PUNCH_RIGHT2,
  OBJECT_ANIM_PLAYER2_HIT_LEFT  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_HIT_LEFT,
  OBJECT_ANIM_PLAYER2_HIT_RIGHT  = OBJECT_ANIM_PLAYER2_STAND_RIGHT + OBJECT_HIT_RIGHT,              

  OBJECT_ANIM_PLAYER3_STAND_RIGHT = OBJECT_ANIM_PLAYER2_HIT_RIGHT + 1,
  OBJECT_ANIM_PLAYER3_RUN_RIGHT = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_RUN_RIGHT,
  OBJECT_ANIM_PLAYER3_STAND_LEFT = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_STAND_LEFT,
  OBJECT_ANIM_PLAYER3_RUN_LEFT  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_RUN_LEFT,
  OBJECT_ANIM_PLAYER3_PUNCH_LEFT1  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_PUNCH_LEFT1,
  OBJECT_ANIM_PLAYER3_PUNCH_LEFT2  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_PUNCH_LEFT2,
  OBJECT_ANIM_PLAYER3_PUNCH_RIGHT1  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_PUNCH_RIGHT1,
  OBJECT_ANIM_PLAYER3_PUNCH_RIGHT2  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_PUNCH_RIGHT2,  
  OBJECT_ANIM_PLAYER3_HIT_LEFT  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_HIT_LEFT,
  OBJECT_ANIM_PLAYER3_HIT_RIGHT  = OBJECT_ANIM_PLAYER3_STAND_RIGHT + OBJECT_HIT_RIGHT,

  OBJECT_ANIM_BOSS_STAND_RIGHT = OBJECT_ANIM_PLAYER3_HIT_RIGHT + 1,
  OBJECT_ANIM_BOSS_RUN_RIGHT = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_RUN_RIGHT,
  OBJECT_ANIM_BOSS_STAND_LEFT = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_STAND_LEFT,
  OBJECT_ANIM_BOSS_RUN_LEFT  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_RUN_LEFT,
  OBJECT_ANIM_BOSS_ATTACK_LEFT1  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_PUNCH_LEFT1,
  OBJECT_ANIM_BOSS_ATTACK_LEFT2  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_PUNCH_LEFT2,
  OBJECT_ANIM_BOSS_ATTACK_RIGHT1  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_PUNCH_RIGHT1,
  OBJECT_ANIM_BOSS_ATTACK_RIGHT2  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_PUNCH_RIGHT2,  
  OBJECT_ANIM_BOSS_HIT_LEFT  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_HIT_LEFT,
  OBJECT_ANIM_BOSS_HIT_RIGHT  = OBJECT_ANIM_BOSS_STAND_RIGHT + OBJECT_HIT_RIGHT,  

  OBJECT_ANIM_HAND = OBJECT_ANIM_BOSS_HIT_RIGHT + 1,
  OBJECT_ANIM_DOOR = OBJECT_ANIM_HAND + 1,
  OBJECT_ANIM_JOYSTICK = OBJECT_ANIM_DOOR + 1,
  OBJECT_ANIM_GAMEOVER = OBJECT_ANIM_JOYSTICK + 1,
  OBJECT_ANIM_GAMECOMPLETE = OBJECT_ANIM_GAMEOVER + 1,  

  OBJECT_ANIM_PHONEBOOTH = OBJECT_ANIM_GAMECOMPLETE + 1,
  OBJECT_ANIM_PHONEBOOTH_BROKEN = OBJECT_ANIM_PHONEBOOTH + 1,

  OBJECT_ANIM_PHONEBOOTH_JUNK1 = OBJECT_ANIM_PHONEBOOTH_BROKEN + 1,
  OBJECT_ANIM_PHONEBOOTH_JUNK2 = OBJECT_ANIM_PHONEBOOTH_JUNK1 + 1,
  OBJECT_ANIM_PHONEBOOTH_JUNK3 = OBJECT_ANIM_PHONEBOOTH_JUNK2 + 1,

  OBJECT_ANIM_POSTBOX = OBJECT_ANIM_PHONEBOOTH_JUNK3 + 1,
  OBJECT_ANIM_POSTBOX_BROKEN = OBJECT_ANIM_POSTBOX + 1,

  OBJECT_ANIM_POSTBOX_JUNK1 = OBJECT_ANIM_POSTBOX_BROKEN + 1,
  OBJECT_ANIM_POSTBOX_JUNK2 = OBJECT_ANIM_POSTBOX_JUNK1 + 1,
  OBJECT_ANIM_POSTBOX_JUNK3 = OBJECT_ANIM_POSTBOX_JUNK2 + 1,

  
  OBJECT_ANIM_BONUS_BURGER = OBJECT_ANIM_POSTBOX_JUNK3 + 1,
  OBJECT_ANIM_BONUS_COLA = OBJECT_ANIM_BONUS_BURGER + 1,    
  
} object_animation_id_t;

typedef enum {
  FACING_LEFT,
  FACING_RIGHT
} object_direction_t;

typedef enum {
  OBJECT_STATE_ALIVE,
  OBJECT_STATE_REMOVED,
  OBJECT_STATE_DEAD,
  OBJECT_STATE_HIT,
  OBJECT_STATE_FLASHING
} object_state_t;

typedef struct {
  int16_t start;
  int16_t stop;
  int16_t speed;
  object_direction_t facing;
} object_animation_t;

typedef struct {
  int16_t x;
  int16_t y;
  int16_t w;
  int16_t h;
  int16_t dx;
  int16_t dy;
} object_image_t;

typedef struct {
  int16_t x;
  int16_t y;
  int16_t vx;
  int16_t vy;
} object_velocity_t;

typedef enum {
  OBJECT_CLASS_FIGHTER,
  OBJECT_CLASS_THING,
  OBJECT_CLASS_JUNK,  
  OBJECT_CLASS_DECORATION
} object_class_t;

#ifdef OBJECT_BACKING_STORE
typedef struct {
  uint8_t fb[(OBJECT_MAX_BLIT_WIDTH/8)*SCREEN_BIT_DEPTH*OBJECT_MAX_HEIGHT];
} object_backing_store_t;
#else
typedef struct {
  int16_t x;
  int16_t y;
  int16_t w;
  int16_t h;
} object_position_t;
#endif

typedef struct {
#ifdef OBJECT_BACKING_STORE
  object_backing_store_t buffers[2];
  frame_buffer_t buffer;
  gfx_blit_t blits[2];
  gfx_blit_t* blit;
#else
  object_position_t positions[2];
  object_position_t* position;
#endif
} object_save_t;

typedef struct object {
  uint16_t id;
  uint16_t class;
  void* data;
  struct object* next;
  struct object* prev;
  int16_t _x;
  int16_t _y;
  int16_t _z;
  int16_t _px;
  int16_t _py;
  object_velocity_t velocity;
  int16_t imageIndex;
  object_image_t* image;
  uint16_t baseId;
  uint16_t animId;
  uint16_t actionId;
  object_animation_t* anim;  
  object_save_t save;
  uint16_t frameCounter;
  uint16_t deadRenderCount;
  uint16_t state;
  void (*update)(uint16_t deltaT, struct object* ptr);
  void (*freeData)(void* data);
  uint16_t visible;
  uint16_t tileRender;
} object_t;


typedef struct {
  object_t* up;
  object_t* down;
  object_t* left;
  object_t* right;
} object_collision_t;


extern object_image_t object_imageAtlas[];
extern object_animation_t object_animations[];
extern object_t* object_activeList;
extern int16_t object_count;
extern object_t* object_zBuffer[OBJECT_MAX_OBJECTS];
//extern uint16_t object_zBufferValid;

void
object_init(void);
object_t*
object_add(uint16_t id, uint16_t class, int16_t x, int16_t y, int16_t dx, int16_t anim, void (*update)(uint16_t deltaT, object_t* ptr), void* data, void (*freeData)(void*));
void
object_free(object_t* ptr);
void
object_render(frame_buffer_t fb, uint16_t deltaT);
void
object_saveBackground(frame_buffer_t fb);
void
object_restoreBackground(frame_buffer_t fb);
void
object_updatePosition(uint16_t deltaT, object_t* ptr);
void
object_setAction(object_t* ptr, object_action_t action);

inline static int16_t
object_x(object_t* ptr) {
  return ptr->_x;
}

inline static int16_t
object_y(object_t* ptr) {
  return ptr->_y;
}

inline static int16_t
object_z(object_t* ptr) {
  return ptr->_z;
}

inline static int16_t
object_px(object_t* ptr) {
  return ptr->_px;
}

inline static int16_t
object_py(object_t* ptr) {
  return ptr->_py;
}

#define object_screenx(ptr) (ptr->image->dx + 0xf + ptr->_x-game_cameraX-game_screenScrollX)
#define object_screeny(ptr) (ptr->image->dy + (ptr->_y-ptr->image->h))

inline static void
object_set_px(object_t* ptr, int16_t px)
{
  ptr->_px = px;  
  int16_t oldX = ptr->_x - game_cameraX;
  ptr->_x = ptr->_px / OBJECT_PHYSICS_FACTOR;
  
  if (oldX + OBJECT_WIDTH < SCREEN_WIDTH && (ptr->_x + OBJECT_WIDTH - game_cameraX)>= SCREEN_WIDTH) {
    ptr->_x = game_cameraX + (SCREEN_WIDTH - OBJECT_WIDTH - 1);
    ptr->_px = ptr->_x * OBJECT_PHYSICS_FACTOR;
  } else if (oldX >= 0 && ptr->_x - game_cameraX < 0) {
    ptr->_x = game_cameraX;
    ptr->_px = ptr->_x * OBJECT_PHYSICS_FACTOR;
  }  
}

inline static void
object_set_py(object_t* ptr, int16_t py)
{
  int16_t oldY = ptr->_y;
  ptr->_py = py;  
  ptr->_y = ptr->_py / OBJECT_PHYSICS_FACTOR;


  if (ptr->_y >= PLAYAREA_HEIGHT) {
    ptr->_y = PLAYAREA_HEIGHT-2;
    ptr->_py = ptr->_y * OBJECT_PHYSICS_FACTOR;
  }

  if (oldY >= GAME_PAVEMENT_START && ptr->_y < GAME_PAVEMENT_START) {
    ptr->_y = GAME_PAVEMENT_START;
    ptr->_py = ptr->_y * OBJECT_PHYSICS_FACTOR;
  }
}

inline static void
object_set_py_no_checks(object_t* ptr, int16_t py)
{
  ptr->_py = py;  
  ptr->_y = ptr->_py / OBJECT_PHYSICS_FACTOR;
}

inline static void
object_set_z(object_t* ptr, int16_t z)
{
  //  object_z_dirty = 1;
  ptr->_z = z;
}

void
object_setAnim(object_t* ptr, int16_t anim);
#endif
