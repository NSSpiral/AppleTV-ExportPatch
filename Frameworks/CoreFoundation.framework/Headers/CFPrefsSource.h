/* Runtime dump - CFPrefsSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject
{
    struct __CFDictionary * _dict;
    id _generationCount;
    id _isSearchList;
    id * shmemEntry;
    struct _opaque_pthread_mutex_t * _lock;
    id lastKnownShmemState;
}

+ (void)withSourceForIdentifier:(struct __CFString *)arg0 user:(struct __CFString *)arg1 byHost:(char)arg2 container:(struct __CFString *)arg3 perform:(id)arg4;
+ (void)withNamedVolatileSourceForIdentifier:(struct __CFString *)arg0 perform:(id)arg1;

- (char)managed;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;
- (id)createRequestNewContentMessageForDaemon:(char)arg0;
- (void)handleReply:(id /* block */)arg0 toRequestNewDataMessage:(NSString *)arg1 onConnection:(NSURLConnection *)arg2 retryCount:(int)arg3 error:(char *)arg4;
- (char)isByHost;
- (void)setAccessRestricted:(char)arg0;
- (void)setDaemonCacheEnabled:(char)arg0;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg0;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg0;
- (void *)copyValueForKey:(struct __CFString *)arg0;
- (void)alreadylocked_setValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (char)alreadylocked_requestNewData;
- (long)alreadylocked_generationCount;
- (struct __CFDictionary *)copyDictionary;
- (void)alreadylocked_setValues:(void * *)arg0 forKeys:(void *)arg1 count:(void * *)arg2;
- (void)alreadylocked_removeAllValues;
- (void)setValues:(void * *)arg0 forKeys:(void *)arg1 count:(void * *)arg2;
- (void)removeAllValues;
- (struct __CFArray *)copyKeyList;
- (void)setValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (void)dealloc;
- (CFPrefsSource *)init;
- (char)synchronize;
- (void)lock;
- (void)unlock;
- (struct __CFString *)container;
- (long)generationCount;
- (void)clearCache;
- (void)finalize;

@end
