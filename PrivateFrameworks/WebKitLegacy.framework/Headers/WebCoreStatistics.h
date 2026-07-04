/* Runtime dump - WebCoreStatistics
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebCoreStatistics : NSObject

+ (NSArray *)statistics;
+ (WebCoreStatistics *)javaScriptRootObjectTypeCounts;
+ (unsigned long)javaScriptProtectedGlobalObjectsCount;
+ (WebCoreStatistics *)javaScriptProtectedObjectTypeCounts;
+ (unsigned long)javaScriptObjectsCount;
+ (unsigned long)javaScriptGlobalObjectsCount;
+ (unsigned long)javaScriptProtectedObjectsCount;
+ (WebCoreStatistics *)javaScriptObjectTypeCounts;
+ (void)garbageCollectJavaScriptObjects;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(char)arg0;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(char)arg0;
+ (unsigned long)iconPageURLMappingCount;
+ (unsigned long)iconRetainedPageURLCount;
+ (unsigned long)iconRecordCount;
+ (unsigned long)iconsWithDataCount;
+ (unsigned long)cachedFontDataCount;
+ (unsigned long)cachedFontDataInactiveCount;
+ (void)purgeInactiveFontData;
+ (unsigned long)glyphPageCount;
+ (char)shouldPrintExceptions;
+ (void)setShouldPrintExceptions:(char)arg0;
+ (void)emptyCache;
+ (void)setCacheDisabled:(char)arg0;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)stopIgnoringWebCoreNodeLeaks;
+ (NSObject *)memoryStatistics;
+ (void)returnFreeMemoryToSystem;
+ (int)cachedPageCount;
+ (int)cachedFrameCount;
+ (int)autoreleasedPageCount;
+ (unsigned long)javaScriptNoGCAllowedObjectsCount;
+ (unsigned long)javaScriptReferencedObjectsCount;
+ (NSArray *)javaScriptRootObjectClasses;
+ (unsigned long)javaScriptInterpretersCount;

@end
