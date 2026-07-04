/* Runtime dump - MEInternetRadioCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MEInternetRadioCollection : ATVDataCollection
{
    struct ITTunerCategoryInfo * _category;
}

- (MEInternetRadioCollection *)initWithDataClient:(ATVDataClient *)arg0 category:(struct ITTunerCategoryInfo *)arg1;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end
