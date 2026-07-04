/* Runtime dump - MBDebugContext
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDebugContext : NSObject
{
    NSMutableDictionary * _dictionary;
}

@property (readonly, nonatomic) long time;
@property (retain, nonatomic) NSDate * simulatedDate;

+ (MBDebugContext *)defaultDebugContext;

- (char)isFlagSet:(NSSet *)arg0;
- (void)dealloc;
- (MBDebugContext *)init;
- (NSString *)description;
- (long)time;
- (NSDate *)simulatedDate;
- (void)setValue:(NSObject *)arg0 forName:(NSString *)arg1;
- (void)removeValueForName:(NSString *)arg0;
- (void)setSimulatedDate:(NSDate *)arg0;
- (void)setFlag:(id)arg0;
- (void)setBool:(char)arg0 forName:(NSString *)arg1;
- (char)boolForName:(NSString *)arg0;
- (void)setInt:(int)arg0 forName:(NSString *)arg1;
- (int)intForName:(NSString *)arg0;
- (void)setDelegate:(NSObject *)arg0 andSelector:(SEL)arg1 forName:(NSString *)arg2;
- (NSString *)performSelectorForName:(NSString *)arg0;
- (NSString *)performSelectorForName:(NSString *)arg0 withObject:(NSObject *)arg1;
- (char)eval:(id)arg0;
- (NSString *)valueForName:(NSString *)arg0;

@end
