/* Runtime dump - ML3LanguageResourceManager
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LanguageResourceManager : NSObject
{
    ML3LanguageResources * _cachedResources;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (ML3LanguageResourceManager *)sharedResourceManager;

- (ML3LanguageResourceManager *)init;
- (void).cxx_destruct;
- (void)invalidateCachedResources;
- (void)fetchLanguageResourcesWithCompletion:(id /* block */)arg0;
- (NSArray *)_buildLanguageResources;
- (void)_fetchLanguageResourcesFromMediaLibraryService:(NSObject *)arg0;

@end
