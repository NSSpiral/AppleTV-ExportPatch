/* Runtime dump - UIActivityItemImageRep
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityItemImageRep : NSObject
{
    id _asset;
    id _thumbnailProvider;
    id _dataProvider;
}

@property (retain, nonatomic) id asset;
@property (copy, nonatomic) id thumbnailProvider;
@property (copy, nonatomic) id dataProvider;

+ (UIActivityItemImageRep *)activityItemImageRepWithAsset:(NSSet *)arg0 thumbnailProvider:(NSObject *)arg1 dataProvider:(/* block */ id)arg2;

- (void)dealloc;
- (NSData *)data;
- (UIImage *)thumbnail;
- (NSSet *)asset;
- (void)setAsset:(NSSet *)arg0;
- (void)setThumbnailProvider:(NSObject *)arg0;
- (void)setDataProvider:(NSObject *)arg0;
- (NSObject *)thumbnailProvider;
- (MPHomeSharingML3DataProvider *)dataProvider;

@end
