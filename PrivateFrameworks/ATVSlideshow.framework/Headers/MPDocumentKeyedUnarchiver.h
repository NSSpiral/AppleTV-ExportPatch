/* Runtime dump - MPDocumentKeyedUnarchiver
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPDocumentKeyedUnarchiver : NSKeyedUnarchiver
{
    <MPAssetKeyDelegate> * _assetKeyDelegate;
    MPDocument * _parentDocument;
}

@property (nonatomic) <MPAssetKeyDelegate> * assetKeyDelegate;
@property (nonatomic) MPDocument * parentDocument;

- (MPDocument *)parentDocument;
- (<MPAssetKeyDelegate> *)assetKeyDelegate;
- (void)setAssetKeyDelegate:(<MPAssetKeyDelegate> *)arg0;
- (void)setParentDocument:(MPDocument *)arg0;

@end
