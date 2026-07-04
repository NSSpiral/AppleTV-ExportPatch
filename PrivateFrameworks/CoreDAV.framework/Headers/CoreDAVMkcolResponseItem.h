/* Runtime dump - CoreDAVMkcolResponseItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMkcolResponseItem : CoreDAVItem
{
    NSMutableSet * _propStats;
}

@property (retain, nonatomic) NSMutableSet * propStats;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVMkcolResponseItem *)init;
- (NSString *)description;
- (NSMutableSet *)propStats;
- (void)addPropStat:(id)arg0;
- (void)setPropStats:(NSMutableSet *)arg0;
- (char)hasPropertyError;

@end
