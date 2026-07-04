/* Runtime dump - CalFileSensor
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalFileSensor : NSObject
{
    NSString * _path;
    int _type;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    id _eventBlock;
    char _started;
}

@property (retain, nonatomic) NSString * path;
@property (nonatomic) int type;
@property (nonatomic) char started;
@property (copy, nonatomic) id eventBlock;

+ (NSString *)copyFileSensorTypeAsString:(int)arg0;
+ (unsigned long)_maskForFileSensorType:(int)arg0;

- (void)setEventBlock:(id /* block */)arg0;
- (id /* block */)eventBlock;
- (void)dealloc;
- (CalFileSensor *)init;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)path;
- (void)stop;
- (void)start;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (CalFileSensor *)initWithPath:(NSString *)arg0 andType:(int)arg1;
- (char)started;
- (void)setStarted:(char)arg0;

@end
