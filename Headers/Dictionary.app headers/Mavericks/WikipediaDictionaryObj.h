//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 14 2013 08:30:39).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DictionaryObj.h"

@class NSMutableArray, NSString, WikipediaAPIRequester;

@interface WikipediaDictionaryObj : DictionaryObj
{
    BOOL _networkError;
    WikipediaAPIRequester *_wikiTitleRequester;
    WikipediaAPIRequester *_wikiLangLinkRequester;
    NSString *_requestingTitle;
    NSString *_requestingLanguage;
    NSString *_requestingVariant;
    id _frameForLangList;
    id _frameParentWebView;
    NSString *_displayTitle;
    NSMutableArray *_languageLinkList;
}

+ (double)_timeoutForAPI;
+ (id)_decomposeWikipediaAPIRequestURL:(id)arg1;
+ (BOOL)_isWikipediaAPIRequestURL:(id)arg1;
+ (BOOL)isEqualWikipediaPage:(id)arg1 anotherURL:(id)arg2;
+ (id)parentBundle;
+ (id)disclaimerString;
+ (id)footerHTMLTemplate;
+ (id)errorHTMLTemplate;
+ (id)pageLoaderTemplate;
+ (BOOL)handleThisDCSDictionaryRef:(struct __DCSDictionary *)arg1;
- (id)_wikipediaProxyServerName;
- (void)_tryToAppendLanguageList;
- (id)_linkInfoForDictionary:(id)arg1 title:(id)arg2;
- (void)_wikipediaAPIRequester:(id)arg1 didFinishLangListRequest:(id)arg2;
- (void)_requestLanguageListUsingAPI;
- (void)_wikiAPIRequestForPage:(id)arg1 language:(id)arg2 variant:(id)arg3;
- (BOOL)_isValidFrame:(id)arg1 inWebView:(id)arg2;
- (id)_originalURLForTitle:(id)arg1 language:(id)arg2 variant:(id)arg3;
- (id)_languageWithVariantForDictionary:(id)arg1;
- (id)_languageForDictionary:(id)arg1;
- (void)setFocused:(BOOL)arg1;
- (long long)foundCountCap;
- (void)setLabelName:(id)arg1;
- (id)labelName;
- (id)postProcessScriptForFrame:(id)arg1 records:(id)arg2 loadFinished:(char *)arg3;
- (id)accessErrorString;
- (id)specialContentsForRecord:(id)arg1;
- (void)preparingLoadingRecord:(id)arg1;
- (id)searchString:(id)arg1 byMethod:(long long)arg2 maxRecord:(long long)arg3;
- (void)dealloc;

@end

