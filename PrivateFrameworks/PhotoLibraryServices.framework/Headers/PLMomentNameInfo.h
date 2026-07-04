/* Runtime dump - PLMomentNameInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNameInfo : NSObject
{
    char _locationInfoIsValid;
    PLRevGeoCompoundNameInfo * __primaryNameInfo;
    PLRevGeoCompoundNameInfo * __secondaryNameInfo;
    NSArray * __orderedNames;
}

@property (retain, nonatomic) PLRevGeoCompoundNameInfo * _primaryNameInfo;
@property (retain, nonatomic) PLRevGeoCompoundNameInfo * _secondaryNameInfo;
@property (retain, nonatomic) NSArray * _orderedNames;

+ (NSString *)_localizedNameForName:(NSString *)arg0;

- (void)dealloc;
- (void)_setOrderedNames:(id)arg0;
- (NSString *)componentsForPrimaryTitle;
- (PLMomentNameInfo *)initWithMoment:(PLMoment *)arg0;
- (PLMomentNameInfo *)initWithMomentList:(PLMoment *)arg0;
- (char)locationInfoIsValid;
- (NSString *)localizedPrimaryTitle;
- (NSString *)componentsForSecondaryTitle;
- (PLRevGeoCompoundNameInfo *)_primaryNameInfo;
- (void)set_primaryNameInfo:(PLRevGeoCompoundNameInfo *)arg0;
- (PLRevGeoCompoundNameInfo *)_secondaryNameInfo;
- (void)set_secondaryNameInfo:(PLRevGeoCompoundNameInfo *)arg0;
- (NSArray *)_orderedNames;

@end
