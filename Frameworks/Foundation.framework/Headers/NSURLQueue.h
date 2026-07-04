/* Runtime dump - NSURLQueue
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueue : NSObject
{
    unsigned int count;
    NSURLQueueNode * head;
    NSURLQueueNode * tail;
    id monitor;
    char waitOnTake;
    char _pad1;
    char _pad2;
    char _pad3;
}

+ (NSObject *)newNode;

- (void)put:(id)arg0;
- (id)take;
- (id)peek;
- (id)peekAt:(unsigned int)arg0;
- (int)indexOf:(PSSpecifierGroupIndex *)arg0;
- (char)waitOnTake;
- (void)setWaitOnTake:(char)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSURLQueue *)init;
- (char)isEmpty;
- (void)clear;
- (void)finalize;
- (char)remove:(NSIndexSet *)arg0;

@end
