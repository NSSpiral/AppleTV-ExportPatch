/* Runtime dump - ATVFlickrProviderForCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFlickrProvider.h>

@protocol BRPhotoProviderForCollection;

@class ATVFlickrCollection;
@interface ATVFlickrProviderForCollection : ATVFlickrProvider <BRPhotoProviderForCollection>
{
    ATVFlickrCollection * _collection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFlickrProviderForCollection *)providerForCollection:(id)arg0;

- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)_handlesObject:(NSObject *)arg0;
- (char)canHaveZeroData;
- (void)setVendPhotoDataOnly:(char)arg0;
- (char)vendPhotoDataOnly;
- (ATVFlickrCollection *)collection;
- (ATVFlickrProviderForCollection *)initWithCollection:(ATVFlickrCollection *)arg0;
- (NSData *)_data;
- (void)dealloc;

@end
