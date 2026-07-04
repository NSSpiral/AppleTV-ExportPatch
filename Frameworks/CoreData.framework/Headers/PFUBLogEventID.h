/* Runtime dump - PFUBLogEventID
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUBLogEventID : NSObject
{
    NSString * _idString;
    int _hash;
    int _eventType;
}

@property (readonly, nonatomic) NSString * idString;
@property (readonly, nonatomic) int hash;
@property (readonly, nonatomic) int eventType;

+ (void)initialize;

- (PFUBLogEventID *)initWithEventType:(int)arg0;
- (PFUBLogEventID *)initWithCustomKey:(NSString *)arg0;
- (NSString *)idString;
- (int)eventType;
- (int)hash;

@end
