/* Runtime dump - IKTextBadgeAttachment
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextBadgeAttachment : NSTextAttachment
{
    IKBadgeElement * _badge;
}

@property (readonly, retain, nonatomic) IKBadgeElement * badge;

- (void).cxx_destruct;
- (IKBadgeElement *)badge;
- (IKTextBadgeAttachment *)initWithBadgeElement:(IKBadgeElement *)arg0;

@end
