/* Runtime dump - NSUnknownRequestTypeResult
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSUnknownRequestTypeResult : NSPersistentStoreResult
{
    NSArray * _subresults;
}

@property (readonly) NSArray * subresults;

- (NSUnknownRequestTypeResult *)initWithSubresults:(NSArray *)arg0;
- (NSArray *)subresults;
- (void)dealloc;

@end
