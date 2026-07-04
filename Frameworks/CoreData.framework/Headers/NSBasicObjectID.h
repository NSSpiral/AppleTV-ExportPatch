/* Runtime dump - NSBasicObjectID
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBasicObjectID : _NSCoreManagedObjectID
{
    int _cd_rc;
    id _referenceData;
}

+ (char *)generatedNameSuffix;

- (NSString *)_retainedURIString;
- (NSData *)_referenceData;
- (void)dealloc;
- (NSBasicObjectID *)initWithObject:(NSObject *)arg0;

@end
