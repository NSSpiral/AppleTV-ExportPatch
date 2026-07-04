/* Runtime dump - SBSAcquireAssertionAction
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAcquireAssertionAction : BSAction

@property (readonly, nonatomic) NSString * assertionName;
@property (readonly, nonatomic) NSString * reason;
@property (readonly, nonatomic) unsigned int port;

+ (NSString *)assertionWithAssertionName:(NSString *)arg0 reason:(NSString *)arg1 withHandler:(id /* block */)arg2;

- (NSString *)reason;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (unsigned int)port;
- (NSString *)assertionName;

@end
