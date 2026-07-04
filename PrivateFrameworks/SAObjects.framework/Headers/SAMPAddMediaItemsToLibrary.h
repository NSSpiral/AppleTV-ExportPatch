/* Runtime dump - SAMPAddMediaItemsToLibrary
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (retain, nonatomic) SAMPCollection * mediaItems;

+ (NSObject *)addMediaItemsToLibrary;
+ (NSDictionary *)addMediaItemsToLibraryWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAMPCollection *)mediaItems;
- (void)setMediaItems:(SAMPCollection *)arg0;

@end
