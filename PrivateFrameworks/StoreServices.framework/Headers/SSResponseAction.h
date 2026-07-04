/* Runtime dump - SSResponseAction
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSResponseAction : NSObject <NSCopying>
{
    SSAccount * _account;
    NSString * _actionType;
    NSString * _clientIdentifier;
    NSString * _creditsString;
    SSDialog * _dialog;
    NSString * _footerSection;
    NSURL * _url;
    int _urlBagType;
}

@property (readonly, nonatomic) NSString * actionType;
@property (readonly, nonatomic) SSAccount * account;
@property (readonly, nonatomic) NSString * clientIdentifier;
@property (readonly, nonatomic) NSString * creditsString;
@property (readonly, nonatomic) SSDialog * dialog;
@property (readonly, nonatomic) NSString * footerSection;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) int URLBagType;

+ (SSResponseAction *)_dialogActionWithDialog:(SSDialog *)arg0;
+ (NSObject *)_invalidateURLBagsAction;
+ (NSNumber *)_setActiveAccountActionWithAccount:(SSAccount *)arg0;
+ (SSResponseAction *)_setCreditsActionWithCredits:(id)arg0 account:(SSAccount *)arg1;
+ (NSObject *)_actionWithActionType:(NSString *)arg0;
+ (NSObject *)_urlActionWithType:(NSObject *)arg0 URL:(NSURL *)arg1;
+ (SSResponseAction *)_selectFooterActionWithSection:(id)arg0;
+ (NSObject *)_checkInAppQueueActionWithClientID:(NSString *)arg0 environment:(NSDictionary *)arg1;

- (NSString *)clientIdentifier;
- (void)dealloc;
- (NSString *)description;
- (SSResponseAction *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (SSDialog *)dialog;
- (SSAccount *)account;
- (NSString *)actionType;
- (NSString *)creditsString;
- (int)URLBagType;
- (NSString *)footerSection;

@end
