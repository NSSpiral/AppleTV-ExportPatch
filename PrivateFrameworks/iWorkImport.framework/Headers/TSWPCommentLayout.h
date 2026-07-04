/* Runtime dump - TSWPCommentLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCommentLayout : TSWPShapeLayout

- (Class)repClassOverride;
- (char)shouldBeDisplayedInShowMode;
- (char)shouldDisplayGuides;
- (char)allowsConnections;
- (char)supportsRotation;
- (char)canBeIntersected;
- (char)canResetTextAndObjectHandles;
- (struct CGRect)nonAutosizedFrameForTextLayout:(NSObject *)arg0;
- (NSDictionary *)commentInfo;
- (EDFill *)fill;
- (struct CGSize)minimumSize;
- (int)wrapType;

@end
