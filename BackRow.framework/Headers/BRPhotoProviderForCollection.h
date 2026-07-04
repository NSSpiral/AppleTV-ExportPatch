/* Runtime dump - BRPhotoProviderForCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoProvider.h>

@protocol BRPhotoProviderForCollection;

@class BRPhotoMediaCollection;
@interface BRPhotoProviderForCollection : BRPhotoProvider <BRPhotoProviderForCollection>
{
    BRPhotoMediaCollection * _collection;
    char _vendPhotoDataOnly;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRPhotoProviderForCollection *)providerForCollection:(id)arg0 controlFactory:(<BRControlFactory> *)arg1;

- (long)dataCount;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)canHaveZeroData;
- (void)setVendPhotoDataOnly:(char)arg0;
- (char)vendPhotoDataOnly;
- (BRPhotoProviderForCollection *)initWithCollection:(BRPhotoMediaCollection *)arg0 controlFactory:(<BRControlFactory> *)arg1;
- (BRPhotoMediaCollection *)collection;
- (NSData *)_data;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
