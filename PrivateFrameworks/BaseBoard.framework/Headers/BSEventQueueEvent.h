/* Runtime dump - BSEventQueueEvent
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEventQueueEvent : NSObject
{
    NSString * _name;
    id _handler;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) id handler;

+ (NSString *)eventWithName:(NSString *)arg0 handler:(id /* block */)arg1;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)executeFromEventQueue;
- (void)_execute;
- (char)isEqualToEvent:(NSObject *)arg0;
- (void)execute;

@end
