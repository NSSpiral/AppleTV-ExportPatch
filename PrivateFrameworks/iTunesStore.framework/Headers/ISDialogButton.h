/* Runtime dump - ISDialogButton
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialogButton : NSObject <SSXPCCoding>
{
    int _actionType;
    id _parameter;
    NSString * _title;
    int _urlType;
    NSString * _subtarget;
    NSDictionary * _dictionary;
}

@property (retain) NSDictionary * dictionary;
@property int actionType;
@property (retain) id parameter;
@property (retain) NSString * title;
@property (copy) NSString * subtarget;
@property int urlType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)buttonWithTitle:(NSString *)arg0;

- (NSDictionary *)copyXPCEncoding;
- (ISDialogButton *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSDictionary *)dictionary;
- (NSString *)title;
- (void)setActionType:(int)arg0;
- (int)actionType;
- (void)setDictionary:(NSDictionary *)arg0;
- (void)performDefaultActionForDialog:(id)arg0;
- (void)loadFromDictionary:(NSDictionary *)arg0;
- (void)setActionTypeWithString:(NSString *)arg0;
- (void)setParameter:(ICSRoleParameter *)arg0;
- (char)isEqual:(NSObject *)arg0 superficial:(char)arg1;
- (int)urlType;
- (ICSRoleParameter *)parameter;
- (int)_actionTypeForString:(NSString *)arg0;
- (void)setSubtarget:(NSString *)arg0;
- (int)_urlTypeForString:(NSString *)arg0;
- (void)setUrlType:(int)arg0;
- (void)_openURLWithRequest:(NSURLRequest *)arg0;
- (NSString *)subtarget;

@end
