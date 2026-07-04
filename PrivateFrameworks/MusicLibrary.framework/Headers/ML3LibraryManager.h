/* Runtime dump - ML3LibraryManager
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LibraryManager : NSObject
{
    ML3MusicLibrary * _currentLibrary;
}

@property (retain, nonatomic) ML3MusicLibrary * currentLibrary;

+ (ML3LibraryManager *)sharedManager;

- (void)dealloc;
- (ML3LibraryManager *)init;
- (void).cxx_destruct;
- (ML3MusicLibrary *)currentLibrary;
- (void)_setupNotifications;
- (void)_teardownNotifications;
- (void)_switchToLibrary:(NSObject *)arg0;
- (void)_deviceSharedLibraryDidChangeDistributedNotification:(NSNotification *)arg0;
- (void)setCurrentLibrary:(ML3MusicLibrary *)arg0;
- (NSNumber *)libraryForAccount:(NSObject *)arg0;
- (NSNumber *)pathToLibraryForAccount:(NSObject *)arg0;

@end
