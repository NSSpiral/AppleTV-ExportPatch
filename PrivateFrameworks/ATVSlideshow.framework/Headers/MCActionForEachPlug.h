/* Runtime dump - MCActionForEachPlug
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCActionForEachPlug : MCAction
{
    MCAction * _action;
    NSString * _prefix;
}

@property (copy) NSString * prefix;
@property (retain) MCAction * action;

+ (NSObject *)forEachPlugActionForTargetPlugObjectID:(NSObject *)arg0 withAction:(MCAction *)arg1 andPrefix:(NSString *)arg2;

- (NSString *)description;
- (MCAction *)action;
- (void)setAction:(MCAction *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCActionForEachPlug *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;
- (NSString *)prefix;
- (void)setPrefix:(NSString *)arg0;

@end
