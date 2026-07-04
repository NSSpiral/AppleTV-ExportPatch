/* Runtime dump - VKCartoStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCartoStyle : NSObject
{
    VKPStyleContents * _contents;
    unsigned int _stylesPopulated;
    struct StyleData * _roadData;
    struct StyleData * _polygonData;
    struct StyleData * _lineData;
    struct StyleData * _labelData;
    struct StyleData * _buildingData;
    struct StyleData * _genericShieldData;
    struct StyleData * _skyData;
    struct StyleData * _gridData;
    struct StyleData * _routeData;
    struct StyleData * _puckData;
    struct StyleData * _vegetationData;
    struct StyleData * _pinData;
    struct StyleData * _mapData;
    struct StyleData * _trafficData;
    struct StyleData * _transferConnectionData;
    VKCartoStyle * _variant;
    VKStylesheet * _stylesheet;
    unsigned int _mapStyleSupport;
    struct _opaque_pthread_mutex_t _lock;
    NSData * _contentsData;
    VKPGlobalProperties * _globalProperties;
    NSArray * _inheritance;
    NSString * _name;
    unsigned int * _inheritanceIndices;
    unsigned int _inheritanceIndexCount;
}

@property (retain, nonatomic) VKCartoStyle * variant;
@property (nonatomic) VKStylesheet * stylesheet;
@property (retain, nonatomic) NSString * name;

- (void)dealloc;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (VKPStyleContents *)contents;
- (void).cxx_construct;
- (unsigned int)inheritsCount;
- (VKStylesheet *)stylesheet;
- (VKCartoStyle *)initWithStyle:(NSObject *)arg0 inheritance:(NSArray *)arg1 globals:(GKSessionGlobals *)arg2 stylesheet:(VKStylesheet *)arg3;
- (void)clearInheritance;
- (struct StyleData *)roadStyleData;
- (struct StyleData *)lineStyleData;
- (struct StyleData *)polygonStyleData;
- (struct StyleData *)labelStyleData;
- (struct StyleData *)buildingStyleData;
- (struct StyleData *)genericShieldStyleData;
- (struct StyleData *)skyStyleData;
- (struct StyleData *)gridStyleData;
- (struct StyleData *)routeStyleData;
- (struct StyleData *)vegetationStyleData;
- (struct StyleData *)pinStyleData;
- (struct StyleData *)puckStyleData;
- (struct StyleData *)trafficStyleData;
- (char)isDrawStyleVisibleAtLOD:(unsigned int)arg0;
- (struct Matrix<float, 4, 1>)basicRoadColor;
- (void)setStylesheet:(VKStylesheet *)arg0;
- (void)applyStyle:(NSObject *)arg0 to:(NSObject *)arg1 inheritance:(NSArray *)arg2 zoom:(float)arg3;
- (void)_setupPropertiesForStyleMask:(unsigned int)arg0;
- (void)_populateStyles:(unsigned int)arg0;
- (NSData *)contentsData;
- (NSArray *)inheritance;
- (id)globals;
- (unsigned int *)inheritanceIndices;
- (struct StyleData *)mapStyleData;
- (struct StyleData *)transferConnectionStyleData;
- (VKCartoStyle *)variant;
- (void)setVariant:(VKCartoStyle *)arg0;

@end
