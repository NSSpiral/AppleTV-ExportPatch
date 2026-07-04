/* Runtime dump - IKStackTemplate
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStackTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement * background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement * documentBanner;
@property (readonly, retain, nonatomic) IKCollectionListElement * collectionList;

- (IKBackgroundElement *)background;
- (IKDocumentBannerElement *)documentBanner;
- (IKCollectionListElement *)collectionList;

@end
