/* Runtime dump - MFCorecipientsIndicatorAtom
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCorecipientsIndicatorAtom : MFModernAtomView
{
    char _touchesWereCancelled;
    <MFCorecipientsIndicatorAtomDelegate> * _delegate;
    NSArray * _recipients;
}

@property (nonatomic) <MFCorecipientsIndicatorAtomDelegate> * delegate;
@property (retain, nonatomic) NSArray * recipients;

- (void)setRecipients:(NSArray *)arg0;
- (MFCorecipientsIndicatorAtom *)initWithRecipients:(NSArray *)arg0;
- (void)setDelegate:(<MFCorecipientsIndicatorAtomDelegate> *)arg0;
- (MFCorecipientsIndicatorAtom *)init;
- (<MFCorecipientsIndicatorAtomDelegate> *)delegate;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (NSArray *)recipients;

@end
