/* Runtime dump - MEInternetRadioItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MEInternetRadioItem : ATVDataItem
{
    struct ITTunerStationInfo * _station;
}

- (MEInternetRadioItem *)initWithDataClient:(ATVDataClient *)arg0 station:(struct ITTunerStationInfo *)arg1;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end
