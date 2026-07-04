/* Runtime dump - CUIRenditionSliceInformation
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionSliceInformation : NSObject <NSCopying>
{
    int _renditionType;
    id _boundaries;
    struct CGRect _destinationRect;
    struct ? _edgeInsets;
}

@property (readonly, nonatomic) int renditionType;
@property (readonly, nonatomic) struct CGRect destinationRect;
@property (readonly, nonatomic) struct ? edgeInsets;

- (NSString *)description;
- (CUIRenditionSliceInformation *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)edgeInsets;
- (struct CGRect)destinationRect;
- (float)positionOfSliceBoundary:(unsigned int)arg0;
- (CUIRenditionSliceInformation *)initWithSliceInformation:(CUIRenditionSliceInformation *)arg0 destinationRect:(struct CGRect)arg1;
- (int)renditionType;
- (struct CGSize)_topLeftCapSize;
- (struct CGSize)_bottomRightCapSize;
- (CUIRenditionSliceInformation *)initWithRenditionType:(int)arg0 destinationRect:(struct CGRect)arg1 topLeftInset:(struct CGSize)arg2 bottomRightInset:(NSSet *)arg3;

@end
