/* Runtime dump - SSItemImageCollection
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemImageCollection : NSObject <NSCopying>
{
    NSArray * _itemImages;
}

@property (readonly, nonatomic) NSArray * itemImages;

- (NSDictionary *)copyXPCEncoding;
- (SSItemImageCollection *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSItemImageCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)bestImageForSize:(struct CGSize)arg0;
- (id)imagesForKind:(id)arg0;
- (SSItemImageCollection *)initWithImageCollection:(SSItemImageCollection *)arg0;
- (SSItemImageCollection *)initWithItemImages:(NSArray *)arg0;
- (NSArray *)itemImages;
- (NSDictionary *)_newImagesForDictionary:(NSDictionary *)arg0;
- (NSObject *)imagesForSize:(struct CGSize)arg0;
- (NSObject *)_imagesForSize:(struct CGSize)arg0 scale:(float)arg1;

@end
