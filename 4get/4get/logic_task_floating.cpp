#include "logic_task_floating.h"

TaskFloating::TaskFloating(): Task(){
	taskType = floating;
}

TaskFloating::TaskFloating(long long id): Task()
{
	clearAllAttr();
	taskId = id;
	taskType = floating;
}
TaskFloating::TaskFloating(long long id, string description, string location, time_t reminderTime, Priority priority) : Task()
{
	TaskType type = floating;
	setupTask(id, type, description, location, reminderTime, priority);
}