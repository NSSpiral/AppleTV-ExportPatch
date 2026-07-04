/* Runtime dump - UIKeyboardCandidateGridSecondaryCandidatesLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridSecondaryCandidatesLayout : UICollectionViewFlowLayout
{
    struct ? _visualStyling;
    int _candidatesVisualStyle;
}

@property (nonatomic) struct ? visualStyling;
@property (nonatomic) int candidatesVisualStyle;

+ (Class)layoutAttributesClass;

- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0;
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (void)setCandidatesVisualStyle:(int)arg0;
- (int)candidatesVisualStyle;
- (void)updateAttributes:(NSDictionary *)arg0;

@end
