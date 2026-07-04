/* Runtime dump - SAUIAddViews
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAddViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * dialogPhase;
@property (copy, nonatomic) NSString * displayTarget;
@property (nonatomic) char scrollToTop;
@property (nonatomic) char temporary;
@property (copy, nonatomic) NSArray * views;

+ (SAUIAddViews *)addViews;
+ (NSDictionary *)addViewsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)views;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)dialogPhase;
- (void)setDialogPhase:(NSString *)arg0;
- (NSString *)displayTarget;
- (void)setDisplayTarget:(NSString *)arg0;
- (char)scrollToTop;
- (void)setScrollToTop:(char)arg0;
- (char)temporary;
- (void)setTemporary:(char)arg0;
- (void)setViews:(NSArray *)arg0;

@end
