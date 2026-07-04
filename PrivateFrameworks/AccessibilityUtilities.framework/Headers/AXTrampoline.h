/* Runtime dump - AXTrampoline
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXTrampoline : NSObject
{
    char _warnAboutUnknownSelectors;
    id _caller;
    Class _targetClass;
}

@property (nonatomic) char warnAboutUnknownSelectors;
@property (nonatomic) id caller;
@property (nonatomic) Class targetClass;

+ (void)methodDoesNotExistSentinal;
+ (AXTrampoline *)methodNotFoundSentinal;
+ (AXTrampoline *)trampolineWithCaller:(NSString *)arg0 targetClass:(Class)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (AXTrampoline *)initWithCaller:(NSString *)arg0 targetClass:(Class)arg1;
- (void)setCaller:(NSString *)arg0;
- (void)setTargetClass:(Class)arg0;
- (Class)targetClass;
- (char)warnAboutUnknownSelectors;
- (/* block */ id *)_findIMPForSelector:(SEL)arg0;
- (char)callerIsClass;
- (void)setWarnAboutUnknownSelectors:(char)arg0;
- (NSString *)caller;

@end
