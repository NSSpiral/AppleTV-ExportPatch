/* Runtime dump - MCActionTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCActionTrigger : MCAction
{
    NSString * _actionKey;
}

@property (copy) NSString * actionKey;

+ (MCActionTrigger *)actionTriggerForTargetPlugObjectID:(NSObject *)arg0 withActionKey:(NSString *)arg1;

- (NSString *)description;
- (NSString *)actionKey;
- (void)setActionKey:(NSString *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCActionTrigger *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
