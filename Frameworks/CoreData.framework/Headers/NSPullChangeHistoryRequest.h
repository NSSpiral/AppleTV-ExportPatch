/* Runtime dump - NSPullChangeHistoryRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPullChangeHistoryRequest : NSPersistentStoreRequest
{
    NSArray * _generationTokens;
}

- (NSPullChangeHistoryRequest *)initWithGenerationTokens:(NSArray *)arg0;
- (NSArray *)generationTokens;
- (void)setGenerationTokens:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)requestType;

@end
