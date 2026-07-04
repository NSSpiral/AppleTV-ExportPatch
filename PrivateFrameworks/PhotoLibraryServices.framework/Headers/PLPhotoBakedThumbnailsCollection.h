/* Runtime dump - PLPhotoBakedThumbnailsCollection
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoBakedThumbnailsCollection : NSObject
{
    NSData * _data;
    NSMutableDictionary * _bakedThumbnails;
}

+ (void)setTesting:(char)arg0;

- (void)dealloc;
- (PLPhotoBakedThumbnailsCollection *)init;
- (PLPhotoBakedThumbnailsCollection *)initWithContentsOfFile:(NSString *)arg0;
- (void)saveToFile:(NSString *)arg0;
- (void)_parseDataWithContentsOfFile:(NSString *)arg0;
- (NSArray *)availableFormats;
- (NSString *)bakedThumbnailsForFormat:(int)arg0;
- (void)setBakedThumbnails:(NSMutableDictionary *)arg0 forFormat:(int)arg1;

@end
