/* Runtime dump - OCXDelayedMediaContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext>
{
    OCPPackage * mPackage;
    NSURL * mTargetLocation;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (OCXDelayedMediaContext *)initWithTargetLocation:(NSObject *)arg0 package:(TSPDirectoryPackage *)arg1;
- (BOOL)loadDelayedNode:(OCDDelayedNode *)arg0;
- (OISFUDataRepresentation *)dataRep;
- (BOOL)saveDelayedMedia:(OCDDelayedMedia *)arg0 toFile:(NSURL *)arg1;

@end
