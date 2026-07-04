/* Runtime dump - MPStoreItemLibraryImport
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemLibraryImport : NSObject
{
    char _addToCloudLibrary;
    NSArray * _importElements;
}

@property (readonly, nonatomic) NSArray * importElements;
@property (readonly, nonatomic) char addToCloudLibrary;

- (MPStoreItemLibraryImport *)initWithImportElements:(NSArray *)arg0 usingCloudLibraryDestination:(char)arg1;
- (NSArray *)importElements;
- (char)addToCloudLibrary;
- (void).cxx_destruct;

@end
