/* Runtime dump - SAMPAceMediaEntityWrapsAcePodcastWrap
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAceMediaEntityWrapsAcePodcastWrap : SAMPPodcast <SASyncWrap>

@property (copy, nonatomic) NSNumber * generation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSURL * identifier;

+ (SAMPAceMediaEntityWrapsAcePodcastWrap *)aceMediaEntityWrapsAcePodcastWrap;
+ (NSDictionary *)aceMediaEntityWrapsAcePodcastWrapWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setGeneration:(NSNumber *)arg0;
- (NSNumber *)generation;
- (NSString *)encodedClassName;

@end
