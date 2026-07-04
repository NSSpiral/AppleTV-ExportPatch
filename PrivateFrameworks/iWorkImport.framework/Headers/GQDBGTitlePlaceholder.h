/* Runtime dump - GQDBGTitlePlaceholder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGTitlePlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    GQDWPLayoutFrame * mFrame;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (NSObject *)layoutFrame;
- (void)dealloc;
- (char)isBlank;

@end
