/* QueueException.h provides a simple exception class for Queues to throw,
 *   plus subclasses (EmptyQueueException, FullQueueException)
 *   for more fine-grained error-handling.
 * See Exception.h for its superclass.
 * Joel Adams, for CS 112 at Calvin University.
 * Student name: ben elpidius (bee6)
 * Date: 23 march 2022
 */
 
#ifndef QUEUEEXCEPTION_H_
#define QUEUEEXCEPTION_H_

#include "Exception.h"

class QueueException : public Exception {
public:
   QueueException(const string& whereThrown, const string& message)
   : Exception(whereThrown, message)
   {}
   
   virtual string className() const {
   	 return "QueueException";
   }
};

class EmptyQueueException : public QueueException {
public:
   EmptyQueueException(const string& whereThrown)
    : QueueException(whereThrown, "queue is empty")
   {}
   
   virtual string className() const {
   	  return "EmptyQueueException";
   }
};

class FullQueueException : public QueueException {
public:
   FullQueueException(const string& whereThrown)
    : QueueException(whereThrown, "queue is full")
   {}
   
   virtual string className() const {
   	  return "FullQueueException";
   }
};

class InvalidSetCapacity : public QueueException {
public:
	InvalidSetCapacity(const string& whereThrown)
	: QueueException(whereThrown, "invalid new capacity")
	{}

	virtual string className() const {
		return "InvalidSetCapacity";
	}
};

#endif /*QUEUEEXCEPTION_H_*/

