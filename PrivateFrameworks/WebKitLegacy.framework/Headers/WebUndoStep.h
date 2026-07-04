/* Runtime dump - WebUndoStep
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUndoStep : NSObject
{
    struct RefPtr<WebCore::UndoStep> m_step;
}

+ (void)initialize;
+ (NSObject *)stepWithUndoStep:(struct PassRefPtr<WebCore::UndoStep>)arg0;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct UndoStep *)step;
- (void)finalize;
- (WebUndoStep *)initWithUndoStep:(struct PassRefPtr<WebCore::UndoStep>)arg0;

@end
