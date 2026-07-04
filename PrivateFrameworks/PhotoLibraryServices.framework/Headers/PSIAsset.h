/* Runtime dump - PSIAsset
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIAsset : NSObject <NSCopying>
{
    NSString * _uuid;
    NSArray * _contentStrings;
    struct __CFArray * _categories;
    struct __CFArray * _owningCategories;
}

@property (copy, nonatomic) NSString * uuid;
@property (readonly, nonatomic) NSArray * contentStrings;
@property (readonly, nonatomic) struct __CFArray * categories;
@property (readonly, nonatomic) struct __CFArray * owningCategories;

- (void)dealloc;
- (PSIAsset *)init;
- (NSString *)description;
- (PSIAsset *)copyWithZone:(struct _NSZone *)arg0;
- (struct __CFArray *)categories;
- (void)clear;
- (NSString *)uuid;
- (NSArray *)contentStrings;
- (void)addContentString:(NSString *)arg0 category:(short)arg1 owningCategory:(short)arg2;
- (void)reverse;
- (void)setUUID:(NSSet *)arg0;
- (PSIAsset *)_initForCopy:(char)arg0;
- (struct __CFArray *)owningCategories;

@end
