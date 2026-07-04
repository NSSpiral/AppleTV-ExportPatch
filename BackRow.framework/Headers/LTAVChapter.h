/* Runtime dump - LTAVChapter
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRChapter.h>
@interface LTAVChapter : BRChapter
{
    AVMetadataItem * _titleMetadataItem;
    AVMetadataItem * _imageMetadataItem;
}

+ (NSObject *)chapterWithTimedMetadataGroup:(NSData *)arg0 assetID:(NSString *)arg1;

- (void)_setTitleMetadataItem:(NSObject *)arg0;
- (void)_setImageMetadataItem:(NSObject *)arg0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id /* <BRImageProxy> */)imageProxy;

@end
