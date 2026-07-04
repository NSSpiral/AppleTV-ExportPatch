/* Runtime dump - CFPrefsSearchListSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource
{
    struct __CFString * _identifier;
    struct __CFArray * _sourceList;
    struct _opaque_pthread_mutex_t * _searchListLock;
    char initialized;
}

+ (void)withSuiteSearchListForIdentifier:(struct __CFString *)arg0 user:(struct __CFString *)arg1 locked:(char)arg2 perform:(id)arg3;
+ (void)withSearchListForIdentifier:(struct __CFString *)arg0 container:(struct __CFString *)arg1 perform:(id)arg2;
+ (void)withSnapshotSearchList:(NSArray *)arg0;

- (struct __CFArray *)alreadylocked_copyKeyList;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFString *)domainIdentifier;
- (id)createRequestNewContentMessageForDaemon:(char)arg0;
- (void)handleReply:(id /* block */)arg0 toRequestNewDataMessage:(NSString *)arg1 onConnection:(NSURLConnection *)arg2 retryCount:(int)arg3 error:(char *)arg4;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg0;
- (void)alreadylocked_setValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (char)alreadylocked_requestNewData;
- (void)replaceSource:(NSObject *)arg0 withSource:(NSObject *)arg1;
- (void)freeze;
- (void)addManagedSourceForIdentifier:(struct __CFString *)arg0 user:(struct __CFString *)arg1;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString *)arg0;
- (void)addSourceForIdentifier:(struct __CFString *)arg0 user:(struct __CFString *)arg1 byHost:(char)arg2 container:(struct __CFString *)arg3;
- (void)addSuiteSourceForIdentifier:(struct __CFString *)arg0 user:(struct __CFString *)arg1;
- (void)addCompatibilitySource;
- (void)addSource:(NSObject *)arg0;
- (long)generationCountFromListOfSources:(id *)arg0 count:(long)arg1;
- (void)removeSource:(NSObject *)arg0;
- (void)dealloc;
- (char)synchronize;
- (void)lock;
- (void)unlock;
- (CFPrefsSearchListSource *)copyWithZone:(struct _NSZone *)arg0;
- (CFPrefsSearchListSource *)initWithIdentifier:(struct __CFString *)arg0;
- (long)generationCount;
- (void)finalize;

@end
