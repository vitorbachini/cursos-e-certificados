SELECT 
	EnglishProductSubcategoryName,
	CASE 
		WHEN 
			EnglishProductSubcategoryName IN 
			('Mountain Bikes', 'Road Bikes', 'Touring Bikes')
		THEN 'Sport'
		WHEN 
			EnglishProductSubcategoryName = 'Forks'
		THEN 'Home'
		WHEN 
			EnglishProductSubcategoryName = 'Headsets'
		THEN 'Media'
	ELSE 'No Category'	
	END AS 'Category'

FROM DimProductSubcategory