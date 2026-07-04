/* Runtime dump - ATVDetailedMetadataControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;

@class BRControl;
@interface ATVDetailedMetadataControlFactory : NSObject <BRControlFactory>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVDetailedMetadataControlFactory *)factory;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (id)_setupMusicDetailedMetadataControl:(BRControl *)arg0;
- (id)_setupBaseDetailedMetadataControl:(BRControl *)arg0;
- (void)_setupSpecificDetailedMetadataControl:(BRControl *)arg0 forControl:(BRControl *)arg1;
- (void)_populateMovieDetails:(id)arg0 forControl:(BRControl *)arg1 isTrailer:(char)arg2;
- (void)_populateActors:(id)arg0 forControl:(BRControl *)arg1;
- (void)_populateDirectors:(id)arg0 forControl:(BRControl *)arg1;
- (void)_populateProducers:(id)arg0 forControl:(BRControl *)arg1;

@end
