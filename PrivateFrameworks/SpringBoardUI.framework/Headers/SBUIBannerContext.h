/* Runtime dump - SBUIBannerContext
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerContext : NSObject
{
    SBUIBannerItem * _item;
    <SBUIBannerSource> * _source;
    <SBUIBannerTarget> * _target;
    char _isValid;
    char _requestsModalPresentation;
    NSString * _presentingActionIdentifier;
}

@property (readonly, retain, nonatomic) SBUIBannerItem * item;
@property (readonly, retain, nonatomic) <SBUIBannerSource> * source;
@property (readonly, retain, nonatomic) <SBUIBannerTarget> * target;
@property (nonatomic) char requestsModalPresentation;
@property (copy, nonatomic) NSString * presentingActionIdentifier;
@property (readonly, nonatomic) SBUIBannerAction * interactiveAction;
@property (readonly, nonatomic) char valid;

- (void)dealloc;
- (NSString *)description;
- (SBUIBannerItem *)item;
- (void)invalidate;
- (char)isValid;
- (<SBUIBannerTarget> *)target;
- (<SBUIBannerSource> *)source;
- (SBUIBannerContext *)initWithItem:(SBUIBannerItem *)arg0 source:(<SBUIBannerSource> *)arg1 target:(<SBUIBannerTarget> *)arg2 presentingActionIdentifier:(NSString *)arg3 requestModalPresentation:(char)arg4;
- (NSString *)presentingActionIdentifier;
- (SBUIBannerContext *)initWithItem:(SBUIBannerItem *)arg0 source:(<SBUIBannerSource> *)arg1 target:(<SBUIBannerTarget> *)arg2;
- (SBUIBannerAction *)interactiveAction;
- (char)requestsModalPresentation;
- (void)setRequestsModalPresentation:(char)arg0;
- (void)setPresentingActionIdentifier:(NSString *)arg0;

@end
